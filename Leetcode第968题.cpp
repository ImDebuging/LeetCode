class Solution {
private:
    int cameraNum=0;
    int PostOrder(TreeNode *root){//n表示当前监控的个数
    //节点一共有三种状态
    //0表示该节点尚未被监控到
    //1表示该节点装有监控
    //2表示该节点现已经可以被监控到
        if(root==NULL){
            return 2;//如果节点为空，则可以被监控到
        }
        int leftStatus=PostOrder(root->left);
        int rightStatus=PostOrder(root->right);//求出左右孩子的状态以确定当前节点应该是什么状态
        if(leftStatus==0||rightStatus==0){//左或右孩子没被监控到，因此当前节点要设置一个监控
            cameraNum++;
            return 1;
        }
        if(leftStatus==1||rightStatus==1){//左或右孩子里有一个是监控，因此，当前节点已经被监控到
            return 2;
        }
        if(leftStatus==2&&rightStatus==2){//左右孩子都被监控到，因此当前节点不需要设置额外摄像头，但是也尚未被监控到
            return 0;
        }
        return -1;
    }
public:
    int minCameraCover(TreeNode* root) {
        if(PostOrder(root)==0){
            cameraNum++;
        }
        return cameraNum;
    }
};
