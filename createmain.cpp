int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int A, B, CNT, NUMBER = 0, r = 1, n;
    cout << "Игра угадайка." << endl << endl;

    while (r == 1)
    {
        cout << "Введите диапазон от n до k (n < k) в котором будет загадываться число:" << endl;
        cin >> A >> B;
        NUMBER = RandNumber(A, B);
        CNT = Play(NUMBER, A, B);
        cout << "Вы угадали!!!" << endl;
        cout << "Общее количество попыток - " << CNT << endl << endl;
        cout << "Хотите сыграть ещё раз?" << endl;
        cout << "Если да введите 1, если нет, то введите 0" << endl;
        cin >> r;

    }
    
}