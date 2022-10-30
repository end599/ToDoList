void TodoItemRelease(TodoItemRef item) {
    free(item->title);
    free(item);
}