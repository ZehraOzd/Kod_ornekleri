package ders;

public interface IseAlma {
    public abstract void uzmanIsIlani();
    default void kasiyerIsIlanı(){
        System.out.println("Kasiyer işe alındı.");
    }
}
