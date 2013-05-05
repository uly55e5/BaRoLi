CREATE TABLE "Article" (
    "article_id" INTEGER PRIMARY KEY NOT NULL,
    "name" TEXT NOT NULL,
    "description" TEXT,
    "comment" TEXT,
    "icon_path" TEXT,
    "sale_price" INTEGER NOT NULL,
    "upper_limit" INTEGER NOT NULL DEFAULT (0),
    "lower_limit" INTEGER NOT NULL DEFAULT (0)
);
CREATE INDEX "Name_idx" on article (name ASC);
