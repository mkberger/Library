# See XMLScore.png for the problem definition
# http://www.diveintopython3.net/xml.html

xml = ''.join(raw_input() for _ in xrange(input()))
import xml.etree.ElementTree as etree
tree = etree.ElementTree(etree.fromstring(xml))
def traverse(node):
  return len(node.attrib) + sum(traverse(child) for child in node)
print traverse(tree.getroot())
