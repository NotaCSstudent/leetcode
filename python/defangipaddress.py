def defang(address:str) -> str:
    address = address.replace(".","[.]")
    return address