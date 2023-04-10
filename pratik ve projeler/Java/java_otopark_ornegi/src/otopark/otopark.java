package otopark;

import java.util.List;

public class otopark {
    public List<Kat> katlar;

    public otopark(List<Kat> katlar){
        this.katlar=katlar;
    }
    
    public boolean park(Araba araba){
        for(Kat kat:katlar){
            if(kat.park(araba)){
                return true;
            }
            else{
                continue;
            }
        }
        return false;
    }
}
