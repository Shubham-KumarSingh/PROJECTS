package com.example.cloneinsta;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.ImageView;

public class tv extends AppCompatActivity {

    ImageView backarr;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tv);

        backarr=(ImageView)findViewById(R.id.backarr);

        backarr.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(tv.this,MainActivity.class);
                startActivity(i);
                finish();
            }
        });
    }
}
