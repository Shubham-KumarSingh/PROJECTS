package com.example.cloneinsta;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class search extends AppCompatActivity {

    ImageView bthome,btacc,btmid,btheart;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_search);

        bthome=(ImageView)findViewById(R.id.bthome);
        btmid=(ImageView)findViewById(R.id.btmid);
        btheart=(ImageView)findViewById(R.id.btheart);
        btacc=(ImageView)findViewById(R.id.btacc);

        bthome.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(search.this,MainActivity.class);
                startActivity(i);
            }
        });
        btmid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(search.this,add.class);
                startActivity(i);
            }
        });
        btheart.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(search.this,heart.class);
                startActivity(i);
            }
        });
        btacc.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(search.this,account.class);
                startActivity(i);
            }
        });

    }
}
