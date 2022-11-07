 addTodo: function(){
      var obj = {completed: false, item: this.newTodoItem}
      localStorage.setItem(this.newTodoItem, JSON.stringify(obj));
      this.clearInput();
    },