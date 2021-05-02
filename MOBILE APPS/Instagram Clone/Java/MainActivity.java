package com.example.cloneinsta;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    ImageView topcam,toptv,topmessage,btsearch,btacc,btmid,btheart,like1,share1,save1,like2,share2,save2,like3,share3,save3;//top+bottom
    ImageView bhuvanstat,status2,status3,status4,status5,status6,status7,status8,status9,altstatus,altstatus1,altstatus2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        topcam=(ImageView)findViewById(R.id.topcam);
        toptv=(ImageView)findViewById(R.id.topTV);
        topmessage=(ImageView)findViewById(R.id.toparrow);
        btsearch=(ImageView)findViewById(R.id.btsearch);
        btmid=(ImageView)findViewById(R.id.btmid);
        btheart=(ImageView)findViewById(R.id.btheart);
        btacc=(ImageView)findViewById(R.id.btacc);
        like1=(ImageView)findViewById(R.id.like1);
        share1=(ImageView)findViewById(R.id.share1);
        save1=(ImageView)findViewById(R.id.save1);
        like2=(ImageView)findViewById(R.id.like2);
        share2=(ImageView)findViewById(R.id.share2);
        save2=(ImageView)findViewById(R.id.save2);
        like3=(ImageView)findViewById(R.id.like3);
        share3=(ImageView)findViewById(R.id.share3);
        save3=(ImageView)findViewById(R.id.save3);
        bhuvanstat=(ImageView)findViewById(R.id.stat1);
        status2=(ImageView)findViewById(R.id.stat2);
        status3=(ImageView)findViewById(R.id.stat3);
        status4=(ImageView)findViewById(R.id.stat4);
        status5=(ImageView)findViewById(R.id.stat5);
        status6=(ImageView)findViewById(R.id.stat6);
        status7=(ImageView)findViewById(R.id.stat7);
        status8=(ImageView)findViewById(R.id.stat8);
        status9=(ImageView)findViewById(R.id.stat9);
        altstatus=(ImageView)findViewById(R.id.altstatus);
        altstatus1=(ImageView)findViewById(R.id.altstatus1);
        altstatus2=(ImageView)findViewById(R.id.altstatus2);

        //topbar
       topcam.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,camera.class);
                startActivity(i);
            }
        });
        toptv.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,tv.class);
                startActivity(i);
            }
        });
        topmessage.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,messages.class);
                startActivity(i);
            }
        });

        //statusbar
        bhuvanstat.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,bhuvanbamstatus.class);
                startActivity(i);
                finish();
            }
        });
        status2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,chutiyapastatus.class);
                startActivity(i);
                finish();
            }
        });
        status3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,jsfilimstatus.class);
                startActivity(i);
                finish();
            }
        });
        status4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,logkyastatus.class);
                startActivity(i);
                finish();
            }
        });
        status5.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,mortalstatus.class);
                startActivity(i);
                finish();
            }
        });
        status6.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,bhuvanbamstatus.class);
                startActivity(i);
                finish();
            }
        });
        status7.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,bhuvanbamstatus.class);
                startActivity(i);
                finish();
            }
        });
        status8.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,rechnadstatus.class);
                startActivity(i);
                finish();
            }
        });
        status9.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,yoobrostatus.class);
                startActivity(i);
                finish();
            }
        });


        //bottombar
        btsearch.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,search.class);
                startActivity(i);
            }
        });
        btmid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,add.class);
                startActivity(i);
            }
        });
        btheart.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,heart.class);
                startActivity(i);
            }
        });
        btacc.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,account.class);
                startActivity(i);
            }
        });

        altstatus.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,chutiyapastatus.class);
                startActivity(i);
                finish();
            }
        });
        altstatus2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,chutiyapastatus.class);
                startActivity(i);
                finish();
            }
        });
        altstatus1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,chutiyapastatus.class);
                startActivity(i);
                finish();
            }
        });
        like1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "THANK YOU FOR LIKING", Toast.LENGTH_SHORT).show();
            }
        });
        share1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "Due to net issues unable to share", Toast.LENGTH_SHORT).show();
            }
        });
        save1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "Due to net issues not able to save", Toast.LENGTH_SHORT).show();
            }
        });
        like2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "WHY ARE U DISLIKING??", Toast.LENGTH_SHORT).show();
            }
        });
        share2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "Due to net issues unable to share", Toast.LENGTH_SHORT).show();
            }
        });
        save2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "Due to net issues not able to save", Toast.LENGTH_SHORT).show();
            }
        });
        like3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "WHY ARE YOU DISLIKING", Toast.LENGTH_SHORT).show();
            }
        });
        share3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "Due to net issues unable to share", Toast.LENGTH_SHORT).show();
            }
        });
        save3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(MainActivity.this, "Due to net issues not able to save", Toast.LENGTH_SHORT).show();
            }
        });
    }
}
