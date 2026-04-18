<?php
$borivali_data = [
    "name" => "Borivali",
    "district" => "Mumbai Suburban",
    "postal_codes" => ["400091 (West)", "400066 (East)"],
    "notable_feature" => "Highest point in Mumbai (Kanheri)",
    "connectivity" => "Western Express Highway & Metro Line 2A/7"
];

echo "<h2>Exploring " . $borivali_data['name'] . "</h2>";
echo "<ul>";
echo "<li><strong>Admin District:</strong> " . $borivali_data['district'] . "</li>";
echo "<li><strong>Pincodes:</strong> " . implode(", ", $borivali_data['postal_codes']) . "</li>";
echo "<li><strong>Transport:</strong> " . $borivali_data['connectivity'] . "</li>";
echo "</ul>";
?>
