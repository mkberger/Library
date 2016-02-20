# See XMLMaxDepth.png for the problem definition
# http://www.diveintopython3.net/xml.html

xml = ''.join(raw_input() for _ in xrange(input()))
import xml.etree.ElementTree as etree
tree = etree.ElementTree(etree.fromstring(xml))
def traverse(node):
    if len(node) == 0:
        return 0
    return 1 + max(traverse(child) for child in node)
print traverse(tree.getroot())
