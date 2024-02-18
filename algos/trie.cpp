class Node {

private:
	Node* links[2];
	bool end;
public:
	Node() {

		end = false;
	}

	bool containsKey(int bit) {
		return links[bit] != nullptr;
	}

	void put(int bit , Node* &node) {
		links[bit] = node;
	}

	Node* get(int bit) {
		return links[bit];
	}

	bool isEnd() {
		return end;
	}

	void setEnd() {
		end = true;
	}

};

class Trie {
	Node* root;

public:
	Trie() {
		root = new Node();
	}
	void insert(int num) {

		Node* curr = root;

		for (int i = 31; i >= 0; i--) {

			int bit = (num >> i) & 1;


			if (curr->containsKey(bit) == false) {

				Node* nn = new Node();
				curr->put(bit, nn);
			}

			curr = curr->get(bit);
		}

		curr->setEnd();
	}

	int maxXor(int num) {

		int ans = 0;

		Node* curr = root;

		for (int i = 31; i >= 0; i--) {

			int bit = (num >> i ) & 1;
			int oppositeBit = 1 - bit;

			if (curr->containsKey(oppositeBit)) {

				ans = ans | (1 << i);
				curr = curr->get(oppositeBit);
			} else {
				curr = curr->get(bit);
			}
		}

		return ans;
	}
};

