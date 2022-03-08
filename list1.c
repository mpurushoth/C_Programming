void display()
{
    while(head!=nullptr)
    {
        printf("%d\n",head -> mark);
        hand=hand->next;
    }
}
int main()
{
    display()
}