/*In this Question we have to print all peripherial nodes(Boundary nodes) in clockwise direction in Binary Tree
  Here is the example
  Input: 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1(Levelwise order)
  Output:5 10 9 2 6 
*/

//NOTE : You can directly run this program as main function as well i have included

// Here is the code
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class PeripheralnodesClockwiseDirection {

   // This function is to store all the node of right subtree(only at boundry) including root data
    public static ArrayList<Integer> Rightside(BinaryTreeNode<Integer> root)
    {
    	ArrayList<Integer> rStore = new ArrayList<Integer>();
    	 if(root == null)
    		 return rStore;
    	 rStore.add(root.data); // root data first
    	 if(root.right != null) {
    	 BinaryTreeNode<Integer>node = root.right;
    	 if(node.right != null || node.left != null)
    	 {
    	    rStore.add(node.data);
    	 }
    	}
    	 Rightside(root.right);
    	 return rStore;
    }
    
    // This function is store all the leaf nodes of peripheral nodes from Right to left direction
    public static ArrayList<Integer> leafnode(BinaryTreeNode<Integer> root)
    {
    	 ArrayList<Integer> leaf = new ArrayList<Integer>();
    	 if(root == null)
    		 return leaf;
    	 
    	 if(root.right == null && root.left == null)
    	 {
    		 leaf.add(root.data);
    	 }
    	ArrayList<Integer> r = leafnode(root.right);
    	if(!r.isEmpty())
    	{
    		for(int i =0;i<r.size();i++)
    		{
    			leaf.add(r.get(i));
    		}
    	}
    	ArrayList<Integer>l = leafnode(root.left);
    	if(!l.isEmpty())
    	{
    		for(int i =0;i<l.size();i++)
    		{
    			leaf.add(l.get(i));
    		}
    	}
    	 
    	 return leaf;
     }
     
     /* Here we are storing all the boundary nodes at left side (But remember here nodes are storing in arraylist is from root to leaf means downward
     but we want nodes from leaf to root)*/
    public static ArrayList<Integer> leftside(BinaryTreeNode<Integer> root) // ArrayList which i will get i need to reverse
    {
    	ArrayList<Integer> lStore = new ArrayList<Integer>();
    	if(root == null)
    		return lStore;
    	if(root.left != null) {
       	 BinaryTreeNode<Integer>node = root.left;
       	 if(node.right != null || node.left != null)
       	 {
       	    lStore.add(node.data);
       	 }
       	}
        leftside(root.left);
        return lStore;
    }
    
    //Take input levelwise
    public static BinaryTreeNode<Integer> takeinputlevelwise()
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the root data");
	    
		int rootdata = s.nextInt();
		if(rootdata == -1)
    	{
			return null;
    	}
		BinaryTreeNode<Integer> root = new BinaryTreeNode<>(rootdata);
		Queue<BinaryTreeNode<Integer>>q = new LinkedList<>();
		q.add(root);
    	
		while(!q.isEmpty())
		{
			 BinaryTreeNode<Integer> front = q.poll();
			 System.out.println("Enter left child of root"+" "+front.data);
			 int leftdata = s.nextInt();
			 if(leftdata != -1)
			 {
				BinaryTreeNode<Integer> node1 = new BinaryTreeNode<>(leftdata);
				q.add(node1);
				front.left = node1;
			 }
			 // for right child
			 System.out.println("Enter right child of root"+" "+front.data);
			 int rightdata = s.nextInt();
			 if(rightdata != -1)
			 {
				BinaryTreeNode<Integer> node2 = new BinaryTreeNode<>(rightdata);
				q.add(node2);
				front.right =node2;
			 }
		}
		return root;
     }
    
    
	public static void main(String[] args)
	{
		BinaryTreeNode<Integer> root = takeinputlevelwise();
		ArrayList<Integer> ans1 = Rightside(root);
		ArrayList<Integer>ans2 =leafnode(root);
		ArrayList<Integer>ans3 =leftside(root);
    
    // Printing all the right boundary node
		for(int i =0; i<ans1.size();i++)
		{
			System.out.print(ans1.get(i)+" ");
		}
    
    // Printing all the left boundary node
		for(int i =0; i<ans2.size();i++)
		{		
			System.out.print(ans2.get(i)+" ");
		}
    // So as we need root from leaf to root(Reversing the arrayList)
		for(int i =ans3.size()-1; i>=0;i--)
		{
			System.out.print(ans3.get(i)+" ");
		}
	}

}


Hope you liked it: )
Happy coding!!
