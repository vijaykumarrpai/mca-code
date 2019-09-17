package com.example.vijayapp;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    EditText mTextUsername;
    Button mButtonLogin;
    TextView mTextViewRegister;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mTextUsername=(EditText)findViewById(R.id.mobile_no);
        mButtonLogin=(Button) findViewById(R.id.button_login);
        mTextViewRegister.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent registerIntent=new Intent(MainActivity.this,RegisterActivity.class);
                startActivity(registerIntent);
            }
        });
    }
}
