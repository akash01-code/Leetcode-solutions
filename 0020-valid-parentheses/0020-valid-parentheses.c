bool isValid(char* s) {
    int n = strlen(s);
    char* stack = malloc(n + 1);
    int top = 0;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            stack[top++] = c;
        } else {
            if (top == 0) { free(stack); return false; }
            char o = stack[--top];
            if ((c == ')' && o != '(') || (c == ']' && o != '[') || (c == '}' && o != '{')) {
                free(stack);
                return false;
            }
        }
    }
    free(stack);
    return top == 0;
}
