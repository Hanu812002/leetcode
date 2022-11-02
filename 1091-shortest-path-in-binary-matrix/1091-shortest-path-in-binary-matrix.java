class  Pair {
        int a;
        int b;
        int c;
        Pair(int a,int b,int c)

        {
            this.a=a;
            this.b=b;
            this.c=c;
        }
    }
class Solution {
    public int shortestPathBinaryMatrix(int[][] grid) {
          int[][] temp=new int[grid.length][grid[0].length];
        if(grid[0][0]==1)
            return -1;
        if(grid.length==1)
            return 1;
        Queue<Pair> st1=new LinkedList<>();
        st1.add(new Pair(0,0,1));
        temp[0][0]=-1;
        // if(source[0]==destination[0]  && source[1]==destination[1])return 0;
        while(!st1.isEmpty())
        {
            Pair pp=st1.peek();
            st1.remove();
            int a=pp.a;
            int b=pp.b;
            int c=pp.c;
            int[][] arr={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
            for(int i=0; i<8; i++)
            {
                int A=a+arr[i][0];
                int B=b+arr[i][1];
                if(A>=0 && B>=0 && B<grid[0].length && A<grid.length && grid[A][B]==0&& temp[A][B]!=-1)
                {
                    st1.add(new Pair(A,B,c+1));
                    temp[A][B]=-1;
                    if(grid.length-1 ==A && grid.length-1 ==B)
                    {
                        return c+1;
                    }

                }

            }
            // st1.remove();
        }
        return -1;
    }
}