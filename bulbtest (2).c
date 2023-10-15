#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    //getting a message from the user
    string message=get_string("Message: ");
    //finding out how many charcthers are in the message
    int messagelength=strlen(message);

    //defining base 2 system variables, all the way up to (2^7) as a byte only allows for 8 0 or 1's.
    int base2one=1;
    int base2two=2;
    int base2three=4;
    int base2four=8;
    int base2five=16;
    int base2six=32;
    int base2seven=64;
    int base2eight=128;

    //assigning a number to each letter in the alphabet. Starting with captials

    //char letters[26];
    //letters[0] ='A';
    //letters[1]='B';
    //int c=67;
    //int d=68;
    //int e=69;
    //int f=70;
    //int g=71;
    //int h=72;
    //int i=73;
    //int j=74;
    //letters[k]=75;
    //letters[l]=76;
    //letters[m]=77;
    //letters[n]=78;
    //letters[o]=79;
    //letters[p]=80;
    //letters[q]=81;
    //letters[r]=82;
    //letters[s]=83;
    //letters[t]=84;
    //letters[u]=85;
    //letters[v]=86;
    //letters[w]=87;
    //letters[x]=88;
    //letters[y]=89;
    //letters[z]=90;

    //int lettersbinary[91];
    //lettersbinary[65]=base2one*1+base2two*0+base2three*0+base2four*0+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[66]=base2one*0+base2two*1+base2three*0+base2four*0+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[67]=base2one*1+base2two*1+base2three*0+base2four*0+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[68]=base2one*0+base2two*0+base2three*1+base2four*0+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[69]=base2one*1+base2two*0+base2three*1+base2four*0+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[70]=base2one*0+base2two*1+base2three*1+base2four*0+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[71]=base2one*1+base2two*1+base2three*1+base2four*0+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[72]=base2one*0+base2two*0+base2three*0+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[73]=base2one*1+base2two*0+base2three*0+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[74]=base2one*0+base2two*1+base2three*0+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[75]=base2one*1+base2two*1+base2three*0+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[76]=base2one*0+base2two*0+base2three*1+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[77]=base2one*1+base2two*0+base2three*1+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[78]=base2one*0+base2two*1+base2three*1+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[79]=base2one*1+base2two*1+base2three*1+base2four*1+base2five*0+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[80]=base2one*0+base2two*0+base2three*0+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[81]=base2one*0+base2two*0+base2three*0+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[82]=base2one*0+base2two*1+base2three*0+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[83]=base2one*1+base2two*1+base2three*0+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[84]=base2one*0+base2two*0+base2three*1+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[85]=base2one*1+base2two*0+base2three*1+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[86]=base2one*0+base2two*1+base2three*1+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[87]=base2one*1+base2two*1+base2three*1+base2four*0+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[88]=base2one*0+base2two*0+base2three*0+base2four*1+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[89]=base2one*1+base2two*0+base2three*0+base2four*1+base2five*1+base2six*0+base2seven*1+base2eight*0;
    //lettersbinary[90]=base2one*0+base2two*1+base2three*0+base2four*1+base2five*1+base2six*0+base2seven*1+base2eight*0;

    //replacing messagelength with one as a tryout, if test does not work switch 1 with messagelength
    //note that while debugging, loop is just going down the if statments, form if (message[i]==65, to one down, message[i]==66, and so on, without actually checking the condition, but rather going down one, regardless of whether boolean expression in if statement is evauled as true or false.)
    for(int i=0;i<messagelength;i++)
    {
        if(message[i]=='a')
        //printf("%i %c\n", message[i], letters[0]);
        //printf("%c\n",65);
        //01000001

          {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a, 00000000
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=0;
            multproduct[1]=0;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                    if (multproduct[z]==0)
                {
                    printf("\U000026AB");
                }
                    else if(multproduct[z]==1)
                {
                    printf("\U0001F7E1");
                }
            }
                printf("\n");
                int z=8;
             if (z==8)
             {
                continue;
             }

          }

         if(message[i]=='b')
        //printf("%i\n", message[i]);



        //printf("%c\n", letters[1]);
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
            }
             printf("\n");
             int z=8;
             if (z==8)
             {
                continue;
             }

        }

         else if(message[i]=='c')

        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=1;

            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
            }
        printf("\n");
        int z=8;
            if (z==8)
                {
                    continue;
                }
        }

         if(message[i]=='d')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
        {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
        }
            printf("\n");
            int z=8;
            if(z==8)
        {
            continue;
        }
             }



         if(message[i]=='e')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='f')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                 if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='g')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=1;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }
        if(message[i]=='h')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=0;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
           }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }
         if(message[i]=='i')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=0;
            multproduct[1]=0;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        //Message:HIMOM goes to 74 after it hits 73
         if(message[i]=='j')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='k')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='l')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
            printf("\n");
            int z=8;
            if(z==8)
        {
            continue;
        }
        }
         if(message[i]=='m')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }
        if(message[i]=='n')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='o')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=1;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
            printf("\n");
            int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='p')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }
        if(message[i]=='q')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=0;
            multproduct[1]=0;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
            printf("\n");
            int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='r')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='s')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }
        if(message[i]=='t')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

    if(message[i]=='u')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
            }
            printf("\n");
            int z=8;
            if(z==8)
        {
            continue;
        }
        }


        if(message[i]=='v')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='w')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=1;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='x')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=0;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='y')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=0;
            multproduct[1]=0;
            multproduct[0]=1;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }

        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }

        if(message[i]=='z')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=0;
            multproduct[1]=1;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
        }
        //if(message[i]==' ')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='!')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='"')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='#')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='$')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='%')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='&')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='(')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]==')')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='*')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='+')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]==',')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='-')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='.')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='/')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=0;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='0')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='1')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='2')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    int three=3;
    //if(message[i]=='3')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='4')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='5')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='6')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='7')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=0;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='8')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='9')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]==':')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]==';')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=0;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }

    }
    //if(message[i]=='<')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='=')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=0;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='>')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=0;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='?')
        {
            int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            multproduct[7]=1;
            multproduct[6]=1;
            multproduct[5]=1;
            multproduct[4]=1;
            multproduct[3]=1;
            multproduct[2]=1;
            multproduct[1]=0;
            multproduct[0]=0;
            for(int z=0;z<8;z++)
            {
                if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
    //if(message[i]=='@')
        {
            //int multproduct[8];
            //multproduct[0]=h,[1]=g,[2]=f, [3]=e, [4]=d, [5]=c, [6]=b, [7]=a
            //multproduct[7]=0;
            //multproduct[6]=0;
            //multproduct[5]=0;
            //multproduct[4]=0;
            //multproduct[3]=0;
            //multproduct[2]=0;
            //multproduct[1]=1;
            //multproduct[0]=0;
            //for(int z=0;z<8;z++)
            {
                //if (multproduct[z]==0)
            {
                printf("\U000026AB");
            }
                //else if(multproduct[z]==1)
            {
                printf("\U0001F7E1");
            }
             }
        printf("\n");
        int z=8;
            if(z==8)
        {
            continue;
        }
    }
}
}

    //if (bit == 0)
    //{
        // Dark emoji
        //printf("\U000026AB");
    //}
    //else if (bit == 1)
    //{
        // Light emoji
        //printf("\U0001F7E1");
    //}
//}
            //}

        //}
    //}



