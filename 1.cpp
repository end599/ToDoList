def todo_done(request, pk):
    todo = Todo.objects.get(id=pk)
    todo.completed = True
    todo.save()
    return redirect('todo_list')


def todo_done_list(request):
    dones = Todo.objects.filter(completed=True)
    return render(request, 'todo/todo_done_lilst.html', {'dones': dones})