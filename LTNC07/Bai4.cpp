vector<string> crosswordPuzzle(vector<string> c, string ws)
{
    if (ws.empty()) return c;
    size_t k = ws.find_last_of(';');
    string w = (k != string::npos ? ws.substr(k+1) : ws);
    ws.resize(k != string::npos ? k : 0);
    for (int dx = 1, dy = 0; dy <= 1; dx--, dy++)
        for (int y = 0; y < 10; y++)
            for (int x = 0; x < 10; x++)
                if (x < dx || y < dy || c[y - dy][x - dx] == '+')
                    for (int i = 0, n = 10-x*dx-y*dy, t = 0; i < n
                    && ((t=c[y+i*dy][x+i*dx])=='-' || t == w[i]);)
                        if(++i==n || c[y+i*dy][x+i*dx] == '+')
                            if (!w[i]) {
                                auto r = c;
                                for (int j = 0; w[j]; j++)
                                    r[y+j*dy][x+j*dx] = w[j];
                                r = crosswordPuzzle(r, ws);
                                if(r.size()) return r;
                            }
    return vector<string>();
}
