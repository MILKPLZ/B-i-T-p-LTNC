class Student{
   private:
      int scores[5];
   public:
      void input(){
          for(int i=0;i<5;i++){
              cin>>scores[i];
          }
      }
      int calculateTotalScore(){
          int sum = 0;
          for(int j=0;j<5;j++){
              sum+=scores[j];
          }
          return sum;
      }
};
