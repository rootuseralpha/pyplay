std::vector<int> alternatingSums(std::vector<int> a) {

    int team1 = 0;
    int team2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (i % 2 == 0)
        {
            team1 += a[i];
        }
        else
        {
            team2 += a[i];
        }
    }

    std::vector<int> b = {team1, team2};
    return b;
}
