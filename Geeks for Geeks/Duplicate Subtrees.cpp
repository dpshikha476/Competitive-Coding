string fillM(Node* root, map<string,int> &m, vector<Node*> &v)
{
    if(root==NULL)
    return "";
    
    string s="(";
    s+=fillM(root->left,m,v);
    s+=to_string(root->data);
    s+=fillM(root->right,m,v);
    s+=")";
    
    if(m[s]==1)
    v.push_back(root);
    
    m[s]++;
    
    return s;
    
}

vector<Node*> printAllDups(Node* root)
{
    vector<Node*> v;
    
    if(root==NULL)
    return v;
    
    map<string,int> m;
    
    fillM(root,m,v);
    
}