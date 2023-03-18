class Solution {
public:
    //"9,3,4,#,#,1,#,#,#,2,#,6,#,#"
    bool isValidSerialization(string preorder) {
//         stack<string>s;
//         string str="";
//         for(int i=0;i<pre.length();i++){
//             if(pre[i]==','){
                
//                 if(!s.empty() && str=="#" && s.top()=="#"){
                  
//                     while(!s.empty() && str=="#" && s.top()=="#"){
//                     cout<<s.top()<<endl;
//                      s.pop();
                     
//                      if(s.empty() || s.top()=="#")
//                         return false;
//                      cout<<s.top()<<endl;
//                     s.pop();
                        
//                   }
                    
//                 if(!s.empty())
//                     s.push(str);
                
//                 }
//                 else
//                     s.push(str);
                
//                 str="";
                
//             }
//             else{
//                 str+=pre[i];
//             }
//         }
        
//         if(s.empty() && str=="#")
//         return true;
        
//                 // cout<<s.top();

//         if(str!="#")
//         s.push(str);
        
//         while(!s.empty() && str=="#" && s.top()=="#"){
//                     // cout<<s.top();
//                     s.pop();
//                     // cout<<s.top();
//                     if(s.empty())
//                         return false;
            
//                     s.pop();
            
//         }
//         // cout<<s.top();
//         if(s.empty())
//         return true;
        
//         return false;
        int nodes=1;
        preorder+=',';
        for(int i=0;i<preorder.size();i++){
            if(preorder[i]!=',')continue;//comma seperated values of nodes
            nodes--; //after taking each node decrease value of left nodes
            if(nodes<0)return false;
            if(preorder[i-1]!='#')nodes+=2;//if current node is not null means it will 2 childs si increase by 2;
        }
        return nodes==0;
    }
};