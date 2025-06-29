class MinStack {
public:
    stack < pair < int, int >> st;

    MinStack() {}

    void push(int val) {
      int min;
      int x = val;
      if (st.empty()) {
        min = x;
      } else {
        min = std::min(st.top().second, x);
      }
      st.push({x,min});
    }

    void pop() {
         st.pop();
    }

    int top() {
      return st.top().first;
    }

    int getMin() {
      return st.top().second;
    }
};
