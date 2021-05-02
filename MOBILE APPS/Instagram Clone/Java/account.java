package com.example.cloneinsta;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;

public class account extends AppCompatActivity {
    ImageView bthome,btsearch,btmid,btheart;
    Button edit;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_account);

        bthome=(ImageView)findViewById(R.id.bthome);
        btmid=(ImageView)findViewById(R.id.btmid);
        btheart=(ImageView)findViewById(R.id.btheart);
        edit=(Button)findViewById(R.id.edit);
        btsearch=(ImageView)findViewById(R.id.btacc);


        bthome.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(account.this,MainActivity.class);
                startActivity(i);
            }
        });
        btmid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(account.this,add.class);
                startActivity(i);
            }
        });
        btheart.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(account.this,heart.class);
                startActivity(i);
            }
        });
        btsearch.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(account.this,search.class);
                startActivity(i);
            }
        });

        edit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(account.this,edit.class);
                startActivity(i);
            }
        });

    }
}
