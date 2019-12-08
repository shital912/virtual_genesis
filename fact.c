int main()
{
    int n=10;
    unsigned long long factorial=1;
    printf("enter an integer:" );
    if (n<0)
        printf("error factorial of negative no doesnt exist");
    else
    {
        for(int i=1;i<=n;++i)
        {
            factorial*=1;

        }
        printf("factorial of %d = %llu",n,factorial);

    }
    return 0;
}

