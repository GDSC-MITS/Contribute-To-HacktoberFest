/*You are given a stream of 'N' integers. For every 'i-th' integer added to the running list of integers, print the resulting median.
Print only the integer part of the median.
Input Format :
The first line of input contains an integer 'N', denoting the number of integers in the stream.

The second line of input contains 'N' integers separated by a single space.
Output Format :
Print the running median for every integer added to the running list in one line (space-separated).
Input Constraints
0 <= N <= 10 ^ 5
1 <= ARR[i] <= 10 ^ 5

Time Limit: 1 sec
Sample Input 1 :
6
6 2 1 3 7 5
Sample Output 1 :
6 4 2 2 3 4
Explanation of Sample Output 1 :
S = {6}, median = 6
S = {6, 2} -> {2, 6}, median = 4
S = {6, 2, 1} -> {1, 2, 6}, median = 2
S = {6, 2, 1, 3} -> {1, 2, 3, 6}, median = 2
S = {6, 2, 1, 3, 7} -> {1, 2, 3, 6, 7}, median = 3
S = {6, 2, 1, 3, 7, 5} -> {1, 2, 3, 5, 6, 7}, median = 4
Sample Input 2 :
5
5 4 3 2 1
Sample Output 2 :
5 4 4 3 3*/

//Solution to this
import java.util.ArrayList;
import java.util.Collections;
import java.util.PriorityQueue;

public class Running_median {

	public static void findMedian(int arr[])
    {
        PriorityQueue<Integer>minHeap =new  PriorityQueue<Integer>();
        PriorityQueue<Integer>maxHeap =new  PriorityQueue<Integer>(Collections.reverseOrder());
        ArrayList<Integer> output  = new ArrayList<Integer>();
        for(int i =0;i<arr.length;i++)
        {
            if(minHeap.isEmpty() && maxHeap.isEmpty())
            {
                maxHeap.add(arr[i]);
                //output.add(arr[i]);
            }
            else if(arr[i]<=maxHeap.peek())
            {
                maxHeap.add(arr[i]);
                if((maxHeap.size()-minHeap.size())>1)
                {
                    minHeap.add(maxHeap.poll());
                    int median = (maxHeap.peek()+minHeap.peek())/2;
                    //output.add(median);
                    arr[i] = median;
                }
                else if(maxHeap.size() == minHeap.size())
                {
                    int median = (maxHeap.peek()+minHeap.peek())/2;
                    // output.add(median);
                    arr[i] = median;
                }
                else if((maxHeap.size()-minHeap.size())== 1)
                {
                    int median = maxHeap.peek();
                    //output.add(median);
                    arr[i] = median;
                }
            }
            else if(arr[i]>maxHeap.peek())
            {
                minHeap.add(arr[i]);
                if((minHeap.size()-maxHeap.size())>1)
                {
                    maxHeap.add(minHeap.poll());
                    int median = (maxHeap.peek()+minHeap.peek())/2;
                    //output.add(median);
                    arr[i] = median;
                }
                else if(maxHeap.size() == minHeap.size())
                {
                    int median = (maxHeap.peek()+minHeap.peek())/2;
                    //output.add(median);
                    arr[i] = median;
                }
                else if((minHeap.size()-maxHeap.size())== 1)
                {
                    int median = minHeap.peek();
                    //output.add(median);
                    arr[i] = median;
                }
            }
            
        }
//        for(int i =0;i<output.size();i++)
//        {
//            System.out.print(output.get(i)+" ");
//        }
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        int arr[] = {6,2,1,3,7,5};
        findMedian(arr);
        for(int i =0;i<arr.length;i++)
        {
        	System.out.print(arr[i]+" ");
        }
	}

}
Please trace this while understanding
Hope you like it
And understood how we can do using Heap(inbuild PriorityQueue)
