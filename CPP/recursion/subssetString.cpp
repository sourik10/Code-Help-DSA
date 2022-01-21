void solve(string str, string output, int index, vector<string>& ans){
    //base case
    if(index>=str.length()){
        if(output.length()>0){
            //no need to insert "" => empty string
            ans.push_back(output);
        }
        return;
    }
    
    //excluded element call
    solve(str, output, index+1, ans);
    
    //included element call
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

vector<string> subsequences(string str){
	
	vector <string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
	
}
