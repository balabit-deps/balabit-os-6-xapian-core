/* Warning: This file is generated by /data/home/olly/tmp/xapian-git-snapshot/tags/v1.2.22/xapian/xapian-core/tests/collate-test - do not modify directly! */

    if (writable&&!inmemory) {
	static const test_desc tests[] = {
	    { "randomidx1", test_randomidx1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if (writable&&!remote&&!inmemory) {
	static const test_desc tests[] = {
	    { "valuesetmatchdecider1", test_valuesetmatchdecider1 },
	    { "alldocsiter1", test_alldocsiter1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
