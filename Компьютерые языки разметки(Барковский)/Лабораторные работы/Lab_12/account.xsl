<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="list">


<xsl:for-each select="account">
<xsl:sort select="id" />
<xsl:value-of select ="."/>

</xsl:for-each>
</xsl:template>

</xsl:stylesheet>