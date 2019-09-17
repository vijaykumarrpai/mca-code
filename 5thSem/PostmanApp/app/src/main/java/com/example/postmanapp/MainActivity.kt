package com.example.postmanapp

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.support.design.widget.Snackbar
import android.support.v4.app.Fragment
import android.support.v4.app.FragmentManager
import android.support.v4.app.FragmentPagerAdapter
import android.view.*
import kotlinx.android.synthetic.main.activity_main.*
import kotlinx.android.synthetic.main.fragment_main.view.*
import java.text.FieldPosition

class MainActivity : AppCompatActivity() {

    private var mSectionPagerAdapter: SectionPagerAdapter? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        setSupportActionBar(toolbar)
        mSectionPagerAdapter = SectionPagerAdapter(supportFragmentManager)

        container.adapter = mSectionPagerAdapter

        fab.setOnClickListener {view ->
            Snackbar.make(view, "Replace with action", Snackbar.LENGTH_SHORT)
                .setAction("Action", null).show()
        }
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu_main, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem?): Boolean {
        val id = item?.itemId
        if(id == R.id.action_settings) {
            return true
        }

        return super.onOptionsItemSelected(item)
    }

    inner class SectionPagerAdapter(fm: FragmentManager): FragmentPagerAdapter(fm) {
        override fun getItem(position: Int): Fragment {
            return PlaceholderFragment.newIntent(position + 1)
        }

        override fun getCount(): Int {
            return 3
        }

    }

    class PlaceholderFragment: Fragment() {
        override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?): View? {
            val rootView  = inflater.inflate(R.layout.fragment_main, container, false)
            rootView.section_label.text = "Hello world from section ${arguments?.getInt(ARG_SECTION_NUMBER)}"
            return rootView
        }

        companion object {
            private val ARG_SECTION_NUMBER = "Section number"

            fun newIntent(sectionNumber: Int): PlaceholderFragment {
                val fragment = PlaceholderFragment()
                val args = Bundle()
                args.putInt(ARG_SECTION_NUMBER, sectionNumber)
                fragment.arguments = args
                return fragment
            }
        }
    }
}
