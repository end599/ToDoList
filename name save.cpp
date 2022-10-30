void TodoItemRename(TodoItemRef item, const char *name) {
    if (strlen(item->name) < strlen(name)) {
        item->name = (char*)realloc(item->name, sizeof(char)*(strlen(name) + 1));
    }
    memset(item->name, 0, strlen(item->name)+1);
    strcpy(item->name, name);
}