from pypdf import PdfReader

reader = PdfReader("zsmit_1.pdf")
number_of_pages = len(reader.pages)
page = reader.pages[0]
text = page.extract_text()
print(text)

