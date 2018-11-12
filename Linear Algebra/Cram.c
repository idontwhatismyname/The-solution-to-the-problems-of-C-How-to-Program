#include<stdio.h>
#include<math.h>

void displayMatrix(const int [][4]);
void EnterMatrix(int [][4]);
char ChangeNumintoChar(int);
int determinant(int i,int j,int [][4]);
void Interchange(int r1,int r2,int [][3]);

int main(){
    int i,j;
    printf("Please enter the entry of the matrix as the following format.\n");
    int formats[4][4];
    char ch='a';
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            formats[i][j]=ch++;
    displayMatrix(formats);
    int Mat[4][4];
    EnterMatrix(Mat);
    displayMatrix(Mat);
    int adj[4][4]
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            adj[j][i]=pow(-1,i+j)*determinant(i,j,Mat);
    return 0;
}

void displayMatrix(const int num[][4]){
    int i,j;
    for(i=0;i<=3;i++){
        printf("| ");
        for(j=0;j<=3;j++)
            printf("%c ",num[i][j]);
        printf("|\n");
    }
}

void EnterMatrix(int mat[][4]){
    int i,j;
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            scanf("%d",&mat[i][j]);
}

char ChangeNumintoChar(int num){
    return num+'0';
}

int determinant(int i,int j,int mat[][4]){
    int p,q,a=0,b=0;
    int Newmat[3][3];
    for(p=0;p<4;p++){
            Newmat[a][b++]=mat[p][q];
        }
        a++;
    }
    if(Newmat[0][0]==0)
    	if(Newmat[1][0]==0)
    		if(Newmat[2][0]==0)
    			return 0;
    		else
    			Interchange(1,3,Newmat);
    	else
    		Interchange(1,2,Newmat);
    int x1=Newmat[0][0]*Newmat[1][1]-Newmat[1][0]*Newmat[0][1];
    int x2=Newmat[0][0]*Newmat[1][2]-Newmat[1][0]*Newmat[0][2];
    int x3=Newmat[0][0]*Newmat[2][1]-Newmat[2][0]*Newmat[0][1];
    	return Newmat[0][0]*x1*x/(Newmat[0][0]*Newmat[0][0]*x1);
    }
    else if(x3==0)
    	return 0;
    int x4=Newmat[0][0]*Newmat[2][2]-Newmat[2][0]*Newmat[0][2];
    if(x1!=0){
        if(p==i-1)
            continue;
        b=0;
		for(q=0;q<4;q++){
            if(q==j-1)
                continue;
		int x=x4*x1-x2*x3;
    else
    	return Newmat[0][0]*x3*x2/(Newmat[0][0]*Newmat[0][0]);
		
}

void Interchange(int r1,int r2,int matr[][3]){
	r1-=1,r2-=1;
	int temp,i;
	for(i=0;i<=2;i++){
		temp=matr[r1][i];
		matr[r1][i]=matr[r2][i];
		matr[r2][i]=temp;
	}
}