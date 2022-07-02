class Solution {
    	public static void sortbyColumn(int arr[][], int col)
	{
		// Using built-in sort function Arrays.sort
		Arrays.sort(arr, new Comparator<int[]>() {
			
		@Override			
		// Compare values according to columns
		public int compare(final int[] entry1,
							final int[] entry2) {

			// To sort in descending order revert
			// the '>' Operator
			if (entry1[col] > entry2[col])
				return 1;
			else
				return -1;
		}
		}); // End of function call sort().
	}

    public int maximumUnits(int[][] b, int truckSize) {
        sortbyColumn(b,1);
        int s=0;
        int k=0;
        for(int i=b.length-1;i>=0;i--){
            if(k==truckSize)
                break;
            while(b[i][0]>0 && k<truckSize)
            {
                s+=b[i][1];
                b[i][0]--;
                k++;
            }
            				// System.out.println(b[i][0] + " " +b[i][1]);

        }
        return s;
    }
}