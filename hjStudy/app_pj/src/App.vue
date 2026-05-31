<template>
  <div class="container">
    <h1> 어플 만들기</h1>

    <div class="input-group">
      <input
      v-model="newTodo"
      @keyup.enter="addTodo"
      placeholder="오늘의 할일 입력하세요"
      class="input"
      />
      <!-- 입력하는 부분 -->

      <!-- 버튼 -->
      <button @click="addTodo" class="btn-add">추가</button>
    </div>

    <!-- 통계라는데여기는 뭘까 -->
    <div class="stats">
      <p>전체: {{  todos.length }} |완료: {{ completedCount }}</p>
    </div>


    <!-- todo목록 -->
    <ul class="todo-list">
      <li v-for="todo in todos" :key="todo.id" :class="{ compiled: todo.done }">
        <div class="todo-item">
          <input
          type="checkbox"
          v-model="todo.done"
          class="checkbox"
          />
          <span class="todo-text">{{ todo.text }}</span>
          <button @click="deleteTodo(todo.id)" class="btn-delete">삭제</button>
        </div>
      </li>
    </ul>

    <!-- 비어있는 상태 메세지 -->
     <p v-if="todos.length ===0" class="empty-message">
      할일 추가해
     </p>
     
  </div>
</template>


<script setup>
import { compile } from 'vue';

const todos = ref([
  { id: 1, text: '프로젝트 준비하기', done:false },
  { id: 2, text: 'Vue 문법 배우기', done:false }
]);

const newTodo = ref('');
let nextId = 3;

// 뷰 문법: computed(계산된 값)
const completedCount = computed(() => {
  return todos.value.filter(t => t.done).length;
});

// 할일 추가
const addTodo = () => {
  if (newTodo.value.trim() === '') return;

  todos.value.push({
    id: nextId++,
    text: newTodo.value,
    done: false
  });

  newTodo.value = '';
};

// 할일 삭제
const deleteTodo = (id) => {
  todos.value = todos.value.filter(t => t.id !== id);
};
</script>

<style scoped>

</style>


