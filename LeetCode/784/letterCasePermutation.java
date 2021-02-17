public List<String> letterCasePermutation(String S) {        
    if (S.length() == 0) {
        return new LinkedList<>();
    }
    
	List<String> ans = new ArrayList<String>();
    RecursiveMethod(ans,0,S.toCharArray());

    return ans;        
}
    
public void RecursiveMethod(List<String> ans , int i, char [] arr ) {
    if (i == arr.length) {
       ans.add(new String(arr));
    }
    else {
        if (!Character.isDigit(arr[i]) ) {
            arr[i]=Character.toUpperCase(arr[i]);
            RecursiveMethod(ans,i+1,arr);
            arr[i]=Character.toLowerCase(arr[i]);
            RecursiveMethod(ans,i+1,arr);
        }
        else // if digit
            RecursiveMethod(ans,i+1,arr);
    }
        return ;
}
