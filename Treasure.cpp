//
// Created by Marius on 2/24/2021.
//

#include "Treasure.h"

Treasure::Treasure(const string &imageUrl) : imageURL(imageUrl) {
  Generate();
}

void Treasure::Generate() {
  if (imageURL.size() <= 12) {
    Add(Item("Tyrael Might", 823.23, "ARMOR"));
    Add(Item("Dimensional Shard", 1123.23, "WEAPON"));
  } else {
    Add(Item("Infernal diamonds", 223.23, "BOOTS"));
    Add(Item("Tyrael Might", 823.23, "ARMOR"));
    Add(Item("Dimensional Shard", 1123.23, "WEAPON"));
  }
}

const string &Treasure::GetImageUrl() const {
  return imageURL;
}

const vector<Item> &Treasure::GetItems() const {
  return items;
}

void Treasure::Add(Item item) {
  items.emplace_back(item);
}

void Treasure::DisplayInBrowser() {
  ofstream output;
  output.open("index.html");

  output << "<img src=\"";
  output << imageURL;
  output << "\" alt=\"Trulli\" width=\"500\" height=\"333\">\n";
  output << "<ul>\n";

  for (Item it: items) {
    output << "<li>";
    output << it.GetName() << " " << it.GetType();

    output << "<ul>\n";
    for (Stat s: it.GetStats()) {
      output << "<li>";
      output << s.GetName() << " " << s.GetValue() << endl;
      output << "</li>";
    }
    output << "</ul>\n";

    output << "</li>";
  }
  output << "</ul>\n";

  output.close();

  ShellExecute(NULL, "open", "index.html",
               NULL, NULL, SW_SHOWNORMAL);

}
