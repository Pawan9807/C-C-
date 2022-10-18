#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3], mat2[3][3], i, j, mat3[3][3],mat4[3][3],mat5[3][3];
    cout<<"Elements of First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat1[i][j];
    }
    cout<<"Elements of Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat2[i][j];
    }
    cout<<"\nAdding the Two Matrix...\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            mat3[i][j] = mat1[i][j]+mat2[i][j];
    }
     cout<<"\nMultiple the Two Matrix...\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            mat4[i][j] = mat1[i][j]*mat2[i][j];
    }
     cout<<"\nsubstract the Two Matrix...\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            mat5[i][j] = mat1[i][j]-mat2[i][j];
    }
    cout<<"display of Add Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<mat3[i][j]<<" ";
        cout<<endl;
    }
    cout<<"display of sub Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<mat4[i][j]<<" ";
        cout<<endl;
    }
    cout<<"display of mul matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<mat5[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
