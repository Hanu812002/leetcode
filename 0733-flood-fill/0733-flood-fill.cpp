class Solution {
public:
     void fun(vector<vector<int>>& image, int sr, int sc,int old, int newc,int n,int m){
     if(sr<0 || sr>=n || sc<0 || sc>=m ){
         return;
     }
     else if(image[sr][sc]!=old || image[sr][sc]==newc)
     return;
     
     image[sr][sc]=newc;
     fun(image,sr+1,sc,old,newc,n,m);
       fun(image,sr-1,sc,old,newc,n,m);
         fun(image,sr,sc-1,old,newc,n,m);
           fun(image,sr,sc+1,old,newc,n,m);
 }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
                if(image[sr][sc]==newColor)
            return image;
        int old=image[sr][sc];
         int r=image.size();
        int c=image[0].size();
        fun(image,sr,sc,old,newColor,r,c);
        return image;
    }
};