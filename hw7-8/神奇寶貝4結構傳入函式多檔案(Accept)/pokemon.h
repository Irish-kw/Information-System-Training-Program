struct Pokemon
{
    char Name[80];
    char LV[10];
    char HP[10];
};
 
void InputData(struct Pokemon *p);
void ShowInfo(struct Pokemon p);
