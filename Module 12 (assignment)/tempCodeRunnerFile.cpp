while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            cin >> query;
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }