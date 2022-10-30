TodoItemRef TodoItemCreate(const char* title) {
    TodoItemRef newItem;
    newItem = (TodoItemRef)malloc(sizeof(struct _TodoItem));
    newItem->completed = false;
    newItem->title = (char*)calloc(sizeof(char), strlen(title) + 1);
    strcpy(newItem->title, title);
    return newItem;
}