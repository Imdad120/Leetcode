class Solution {
    public static void sets(List<Integer> ans , int [] arr, int idx ,List<List<Integer>> list ){
        if(idx == arr.length){
            list.add( new ArrayList<>(ans));
            return ;
        }

        sets(ans, arr,idx+1,list); // skip
        ans.add(arr[idx]);   // add index in ans 
        sets(ans,arr,idx+1,list);   // pick 
        ans.remove(ans.size() - 1);
    }

    public List<List<Integer>> subsets(int[] arr) {
       List<List<Integer>> list = new ArrayList<>();
       List<Integer> ans = new ArrayList<>();
        sets(ans,arr,0,list);
       // Collections.sort(list);
        return list;
    }
}