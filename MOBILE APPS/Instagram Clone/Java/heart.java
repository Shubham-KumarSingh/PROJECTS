package com.example.cloneinsta;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class heart extends AppCompatActivity {

    ImageView bthome,btacc,btmid,btsearch;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_heart);

        bthome=(ImageView)findViewById(R.id.bthome);
        btmid=(ImageView)findViewById(R.id.btmid);
        btsearch=(ImageView)findViewById(R.id.btsearch);
        btacc=(ImageView)findViewById(R.id.btacc);

        bthome.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(heart.this,MainActivity.class);
                startActivity(i);
                finish();
            }
        });
        btmid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(heart.this,add.class);
                startActivity(i);
            }
        });
        btsearch.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(heart.this,search.class);
                startActivity(i);
            }
        });
        btacc.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(heart.this,account.class);
                startActivity(i);
            }
        });

    }
}
