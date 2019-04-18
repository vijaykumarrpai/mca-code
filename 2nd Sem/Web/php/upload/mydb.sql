-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Nov 12, 2016 at 07:56 PM
-- Server version: 5.6.17
-- PHP Version: 5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `mydb`
--

-- --------------------------------------------------------

--
-- Table structure for table `stud`
--

CREATE TABLE IF NOT EXISTS `stud` (
  `slno` int(2) DEFAULT NULL,
  `name` varchar(12) DEFAULT NULL,
  `email` varchar(31) DEFAULT NULL,
  `phono` bigint(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `stud`
--

INSERT INTO `stud` (`slno`, `name`, `email`, `phono`) VALUES
(1, 'Abhishek', 'abhishekspatil4@gmail.com', 7795240685),
(2, 'abhishek', 'abhisheknarayanaswamy@gmail.com', 9845100790),
(3, 'Aditi', 'Aditijha3024@outlook.com', 9584696900),
(4, 'Aditya', 'adityakashyn@gmail.com', 9482636246),
(5, 'Akshatha.S', 'akshathayadav30@gmail.com', 9066347017),
(6, 'Ankush', 'ankushbmynalli@gmail.com', 9591666252),
(7, 'Anshuman', 'harsh2528@gmail.com', 8904697414),
(8, 'Ashrumit ', 'ashrumit25@gmail.com', 9902048729),
(9, 'Ayush', 'ayush.1994.jaiswal@gmail.com', 9163631476),
(10, 'Bakarali', 'bakaralisunasra@gmail.com', 9913163363),
(11, 'Bhargavi v.s', 'bhargavi.vippu7@gmail.com', 8050517806),
(12, 'Darshan', 'darshank53@gmail.com', 9535431041),
(13, 'Darshan', 'dachu9495@gmail.com', 9986600331),
(14, 'Dinesh', 'dineshdeshpande0@gmail.com', 9021770028),
(15, 'Farah', 'Farah.career2014@gmail.com', 9108875150),
(16, 'Gangadhar', 'gangapapu5@gmail.com', 9916116514),
(17, 'Greeshma Y', '14greeshma94@gmail.com', 8867470763),
(18, 'Indranil', 'samsung.indranil2013@gmail.com', 9046172833),
(19, 'Javed', 'javedmb0@gmail.com', 9743460178),
(20, 'Kaushik ', 'kaushikdas771@gmail.com', 8820986634),
(21, 'Keerti', 'kirtidodamani1994@gmail.com', 9108281361),
(22, 'Madhuri', 'joshimady1584@gmail.com', 8050395248),
(23, 'Mahesh ', 'maheshmax2040@gmail.com', 7026043334),
(24, 'Mayank', 'mmayankpatodiaa@gmail.com', 9108649975),
(25, 'Mithun', 'mithun.11193@gmail.com', 8880492379),
(26, 'mohit', 'mohitlunawat93@gmail.com', 9535461133),
(27, 'naveen', 'naveen.durai08@gmail.com', 9964779181),
(28, 'Naveen', 'naveencobaind7@gmail.com', 9972056900),
(29, 'Prashant', 'prashantrm12@gmail.com', 8277206221),
(30, 'Rabin', 'Rabinhansda24@gmail.com', 9886977544),
(31, 'Rahul', 'rahul.shaw.274@gmail.com', 9051458469),
(32, 'Rajakumar', 'rajkumarsatya0@gmail.com', 9483460346),
(33, 'Rajat', 'rajat.vaghani@gmail.com', 9836827577),
(34, 'Rishabh', 'friendrishi23@gmail.com', 9571315835),
(35, 'riya', 'RiyaChakraborty64@gmail.com', 9108881291),
(36, 'Rohit', 'rohitkulkarni.94@gmail.com', 9481123996),
(37, 'sabarinathan', 'shabrikaruna69@gmail.com', 7204328970),
(38, 'Sangram', 'sangramudapudi@gmail.com', 9986491366),
(39, 'SANTOSH', 'santosh25793@gmail.com', 9739724420),
(40, 'Shabbir', 'BiradarShabbir@gmail.com', 8861858930),
(41, 'Sharat', 'Sharat.humnabadkar@gmail.com', 8553189925),
(42, 'Sheetal', 'sheetal2195@gmail.com', 8904525321),
(43, 'Shrilaxmi', 'shrilamibendre@gmail.com', 7795842234),
(44, 'Sourav', 'whistler.81@live.in', 7795609810),
(45, 'Spoorti', 'spoortiprabhumath@gmail.com', 7204597068),
(46, 'suma', 'sumagshettar@gmail.com', 8147921822),
(47, 'Sushmitha', 'Sush13sinha@gmail.com', 8892818129),
(48, 'Swathi.V', 'swathirajuv.v24@gmail.com', 8892639284),
(49, 'Swetha', 'swetha.shikrap@gmail.com', 9986600942),
(50, 'Thanushree.R', 'thanushree.r24@gmail.com', 8970033602),
(51, 'VijayKumar', 'vijaykumarmk1024@gmail.com', 7022658338),
(52, 'Vipul rao', 'Vipulrao355@gmail.com', 9632667812);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
