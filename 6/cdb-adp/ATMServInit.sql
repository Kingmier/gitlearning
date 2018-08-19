USE [ATMServer]
GO
/****** 对象:  Table [dbo].[Table_Acount]    脚本日期: 07/26/2017 10:00:37 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
SET ANSI_PADDING ON
GO
CREATE TABLE [dbo].[Table_Acount](
	[acountNO] [char](50) NOT NULL,
	[userid] [char](50) NOT NULL,
	[balance] [float] NOT NULL,
	[passwd] [int] NOT NULL CONSTRAINT [DF_Table_Acount_passwd]  DEFAULT ((111111)),
 CONSTRAINT [PK_Table_Acount] PRIMARY KEY CLUSTERED 
(
	[acountNO] ASC
)WITH (PAD_INDEX  = OFF, STATISTICS_NORECOMPUTE  = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS  = ON, ALLOW_PAGE_LOCKS  = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
SET ANSI_PADDING OFF



USE [ATMServer]
GO
/****** 对象:  Table [dbo].[Table_Cstom]    脚本日期: 07/26/2017 10:01:08 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Table_Cstom](
	[ID] [nchar](20) NOT NULL,
	[name] [nchar](10) NOT NULL,
	[sex] [nchar](10) NOT NULL,
	[mobile] [nchar](20) NOT NULL,
	[company] [nchar](30) NULL
) ON [PRIMARY]
