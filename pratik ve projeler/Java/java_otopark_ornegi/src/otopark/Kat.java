package otopark;

import java.util.List;
import java.util.LinkedList;

public class Kat {
    public int katNumarasi;
    public int sutun;
    public List<parkYeri> parkAlani;
    public int sutun_sayisi = 2;

    public Kat(int sutun, int katNumarasi){
        this.katNumarasi=katNumarasi;
        this.sutun=sutun;
        this.parkAlani= new LinkedList<>();

    }
    public parkYeri bosAlan(){
        int toplam_yer_sayisi =sutun * sutun_sayisi;
        if(parkAlani.size()>=toplam_yer_sayisi){
            //park dolu
            return null;
        }
        else if(parkAlani.isEmpty()){
            return new parkYeri(0,0,katNumarasi);
        }
        else{
            parkYeri son_dolu_alan = parkAlani.get(parkAlani.size()-1);
            if(son_dolu_alan.satir<sutun_sayisi){
                return new parkYeri(son_dolu_alan.sutun,son_dolu_alan.satir,katNumarasi);
            }
            else{
                return new parkYeri(son_dolu_alan.sutun+1,0,katNumarasi);
            }
        }
        
    }

    public boolean park(Araba araba){
        parkYeri bos_yer = bosAlan();
        if(bos_yer ==null){
            return false;

        }
        else{
            bos_yer.park(araba);//bos park yeri
            parkAlani.add(bos_yer);
            return true;
        }
    }
}
