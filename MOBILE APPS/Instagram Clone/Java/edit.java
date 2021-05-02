package com.example.cloneinsta;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.Toast;

public class edit extends AppCompatActivity {

    ImageView topright,topleft;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_edit);

        topleft=(ImageView)findViewById(R.id.topcross);
        topright=(ImageView)findViewById(R.id.topthik);

        topright.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(edit.this, "THE DATA WILL BE UPDATED", Toast.LENGTH_SHORT).show();

                Intent i=new Intent(edit.this,account.class);
                startActivity(i);
                finish();
            }
        });
        topleft.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(edit.this,account.class);
                startActivity(i);
                finish();
            }
        });


    }
}
