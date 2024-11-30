const x_class = 'x'
const o_class = 'o'
const winning_Combinations=[
    //horizontal winning combos
    [0,1,2], [3,4,5], [6,7,8],
    //vertical winning combos
    [0,3,6], [1,4,7], [2,5,8],
    //diagonal winning combos
    [0,4,8], [2,4,6]
]
const winningMessage = document.getElementById('winning')
const winningMessageText = document.querySelector('[data-winning-message]')
const cellElements = document.querySelectorAll('[data-cell]')
const restartButton = document.getElementById('restartbutton')
const board = document.getElementById('board')
let circleTurn

//startgame
startGame()

restartButton.addEventListener('click', startGame)

function startGame(){
    circleTurn = false
    cellElements.forEach(cell => {
        cell.classList.remove(x_class)
        cell.classList.remove(o_class)
        cell.removeEventListener('click', handleClick)
        cell.addEventListener('click', handleClick, { once: true })
    })
    setBoardHoverClass()
    winningMessage.classList.remove('show')
}
//console.log('hello')

function handleClick(e){
    console.log('clicked')
    const cell = e.target
    const currentClass = circleTurn ? o_class : x_class
    //place mark
    placeMark(cell,currentClass)
    
    //when someone wins
    if(checkWin(currentClass)){
        console.log(currentClass + ' winner')
        endGame(false)
    }
    else if(isDraw()){
        endGame(true)
    }
    else{
        //switch turns
        swapTurns()

        //add hover
        setBoardHoverClass()
    }
  
}

function placeMark(cell,currentClass){
    cell.classList.add(currentClass)
}

function setBoardHoverClass(){
    board.classList.remove(x_class)   
    board.classList.remove(o_class)
    if(circleTurn){
        board.classList.add(o_class)
    } 
    else{
        board.classList.add(x_class)
    }

}

function swapTurns(){
    circleTurn = !circleTurn
}

function checkWin(currentClass){
    return winning_Combinations.some(combination => {
        return combination.every(index =>{ 
            return cellElements[index].classList.contains(currentClass)
        })
    })
}

function endGame(draw){
    if(draw){
        winningMessageText.innerText = `Draw!!`
    }
    else{
        winningMessageText.innerText = `${circleTurn? "O" : "X"} wins!`
    }
    winningMessage.classList.add('show')
}

function isDraw(){
    return [...cellElements].every(cell =>{
        return cell.classList.contains(x_class) || cell.classList.contains(o_class)
    })
}