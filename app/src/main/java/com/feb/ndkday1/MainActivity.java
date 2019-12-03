package com.feb.ndkday1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView tv_sign;
    SignTools signTools;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        signTools = new SignTools();
        tv_sign = findViewById(R.id.tv_sign);
        tv_sign.setText(signTools.name);
        tv_sign.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                signTools.changeName();
                signTools.add();
                tv_sign.setText(signTools.name);
            }
        });
    }
}
